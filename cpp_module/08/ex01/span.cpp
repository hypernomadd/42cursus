#include "span.hpp"

Span::Span(unsigned int n) : n(n) {

}

Span::Span(const Span &copy) : n(copy.n), v(copy.v) {

}

Span::~Span() {

}

Span &Span::operator=(const Span &copy) {
    if (this == &copy)
        return *this;
    this->n = copy.n;
    this->v = copy.v;
    return *this;
}

std::vector<unsigned int> Span::getVector() {
    return this->v;
}

void Span::addNumber(unsigned int value) {
    if (this->v.size() >= n)
        throw Span::NoSpaceException();
    v.push_back(value);
}

void Span::addNumber(it begin, it end) {
    if (this->v.size() + std::distance(begin, end) > this->n)
        throw Span::NoSpaceException();
    this->v.insert(this->v.end(), begin, end);
}

long long Span::longestSpan() {
    if (this->v.size() < 2)
        throw Span::NoSpanException();
    long long min = *std::min_element(this->v.begin(), this->v.end());
    long long max = *std::max_element(this->v.begin(), this->v.end());
    return (max - min);
}

unsigned int Span::shortestSpan() {
    if (this->v.size() < 2)
        throw Span::NoSpanException();
    unsigned int diff(0);
    std::vector<unsigned int> v(this->v);
    std::vector<unsigned int> span(this->v.size());

    std::sort(v.begin(), v.end());
    unsigned int ret(v.back() - v.front());
    for (it pos = v.begin() + 1; pos != v.end(); pos++)
        if ((diff = static_cast<unsigned int>(*pos) - static_cast<unsigned int>(*(pos - 1))) < ret)
            ret = diff;
    return ret;
}

const char* Span::NoSpaceException::what() const throw() {
    return "No Space Exception.";
}

const char* Span::NoSpanException::what() const throw() {
    return "No Span Exception.";
}