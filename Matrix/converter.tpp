template<class K>
void Matrix<K>::matrix_to_vector() {
    K **data_vector = new K*[this->line];

    for (int line_copy = 0; line_copy < this->line; ++line_copy) {
        data_vector[line_copy] = new K[1];
        data_vector[line_copy][0] = this->data[line_copy][0];
    }

    for (int line_delete = 0; line_delete < this->line; ++line_delete) {
        delete [] data[line_delete];
    }

    delete [] data;

    this->column = 1;
    this->vector = true;
    this->data = data_vector;
}

template<class K>
void Matrix<K>::vector_to_matrix() {
    this->vector = false;
}