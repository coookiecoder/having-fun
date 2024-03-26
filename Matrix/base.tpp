template<class K>
Matrix<K>::Matrix() : line(0), column(0), vector(false) {
    this->data = nullptr;
}

template<class K>
Matrix<K>::Matrix(unsigned line, unsigned column) : line(line), column(column), vector(false) {
    this->data = new K*[line];

    for (int line_set = 0; line_set < line; ++line_set) {
        this->data[line_set] = new K[column];
    }

    for (int line_set = 0; line_set < line; ++line_set) {
        for (int column_set = 0; column_set < column; ++column_set) {
            this->data[line_set][column_set] = K();
        }
    }
}

template<class K>
Matrix<K>::Matrix(unsigned line, unsigned column, const std::initializer_list<K> &value) : line(line), column(column), vector(false) {
    this->data = new K*[line];

    for (int line_set = 0; line_set < line; ++line_set) {
        this->data[line_set] = new K[column];
    }

    auto value_iterator = value.begin();

    for (int line_set = 0; line_set < line; ++line_set) {
        for (int column_set = 0; column_set < column; ++column_set) {
            if (value_iterator != value.end()) {
                this->data[line_set][column_set] = *(value_iterator++);
            } else {
                this->data[line_set][column_set] = K();
            }
        }
    }
}

template<class K>
Matrix<K>::Matrix(Matrix const &copy) : line(copy.line), column(copy.column), vector(copy.vector) {
    this->data = new K*[copy.line];

    for (int line_set = 0; line_set < copy.line; ++line_set) {
        data[line_set] = new K[copy.column];
    }

    for (int line_copy = 0; line_copy < copy.line; ++line_copy) {
        for (int column_copy = 0; column_copy < copy.column; ++column_copy) {
            data[line_copy][column_copy] = copy.data[line_copy][column_copy];
        }
    }
}

template<class K>
Matrix<K>::Matrix(Matrix &&copy) noexcept : line(copy.line), column(copy.column), vector(copy.vector) {
    this->data = copy.data;

    copy.line = 0;
    copy.column = 0;
    copy.vector = false;
    copy.data = nullptr;
}

template<class K>
Matrix<K> &Matrix<K>::operator=(const Matrix &copy) {
    if (this != &copy) {
        this->line = copy.line;
        this->column = copy.column;
        this->vector = copy.vector;
        this->data = new K *[copy.line];

        for (int line_copy = 0; line_copy < copy.line; ++line_copy) {
            data[copy.line] = new K[copy.column];
        }

        for (int line_copy = 0; line_copy < copy.line; ++line_copy) {
            for (int column_copy = 0; column_copy < copy.column; ++column_copy) {
                data[line_copy][column_copy] = copy.data[line_copy][column_copy];
            }
        }
    }
    return *this;
}

template<class K>
Matrix<K> &Matrix<K>::operator=(Matrix &&copy) noexcept {
    if (this != &copy) {
        this->line = copy.line;
        this->column = copy.column;
        this->vector = copy.vector;
        this->data = copy.data;

        copy.line = 0;
        copy.column = 0;
        copy.vector = false;
        copy.data = nullptr;
    }
    return *this;
}

template<class K>
Matrix<K>::~Matrix() {
    for (int line_delete = 0; line_delete < this->line; ++line_delete) {
        delete [] data[line_delete];
    }

    delete [] data;
}