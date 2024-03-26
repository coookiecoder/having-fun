template<class K>
void Matrix<K>::set(unsigned line_set, unsigned column_set, K value) {
    if (line_set <= this->line && column_set <= this->column && line_set && column_set) {
        this->data[line_set - 1][column_set - 1] = value;
    } else {
        std::cout << "error while setting the data at " << line_set << " " << column_set << std::endl;
    }
}

template<class K>
K Matrix<K>::get(unsigned line_get, unsigned column_get) const {
    if (line_get <= this->line && column_get <= this->column && line_get && column_get) {
        return this->data[line_get - 1][column_get - 1];
    } else {
        std::cout << "error while getting the data at " << line_get << " " << column_get << std::endl;
        return K();
    }
}