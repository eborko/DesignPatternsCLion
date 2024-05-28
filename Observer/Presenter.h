//
// Created by borko on 5/28/2024.
//

#ifndef PRESENTER_H
#define PRESENTER_H

namespace observer {
    class Presenter
    {
    public:
        virtual ~Presenter() = default;
        virtual void Display() = 0;
    };
}

#endif //PRESENTER_H
