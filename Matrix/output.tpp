template<class K>
bool Matrix<K>::is_square() const {
    if (this->line == this->column)
        return true;
    return false;
}

template<class K>
bool Matrix<K>::is_vector() const {
    return this->vector;
}

template<class K>
std::ostream &operator<<(std::ostream &output, Matrix<K> const &input) {
    output << "is a square : " << input.is_square() << std::endl;
    output << "is a vector : " << input.is_vector() << std::endl;
    for (int line_print = 0; line_print < input.get_line(); ++line_print) {
        output << "[";
        for (int column_print = 0; column_print < input.get_column(); ++column_print) {
            if (column_print < input.get_column() - 1) {
                output << std::setw(10) << (input.get(line_print + 1, column_print + 1)) << ", ";
            } else {
                output << std::setw(10) << (input.get(line_print + 1, column_print + 1));
            }
        }
        output << "]" << std::endl;
    }
    if (input.get_line() == 0 && input.get_column() == 0) {
        output << "empty matrix" << std::endl;
    }
    output << std::endl;
    return output;
}