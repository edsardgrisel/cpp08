#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack(){}

template <typename T> MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other) {}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{

}

template <typename T> MutantStack<T>::~MutantStack();

        const_iterator template <typename T> MutantStack<T>::begin() const;
        iterator       template <typename T> MutantStack<T>::begin();
        const_iterator template <typename T> MutantStack<T>::end() const;
        iterator       template <typename T> MutantStack<T>::end();