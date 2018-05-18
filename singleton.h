// Variadic singleton
// Copyright (C) 2018 Ben Luo

#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

namespace singleton
{
    template<class T, class... U>
    static T& instance(U&&... u)
    {
        static T t{std::forward<U>(u)...};
        return t;
    }
}

#endif // SINGLETON_H_INCLUDED
