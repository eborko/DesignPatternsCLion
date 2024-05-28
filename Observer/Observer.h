//
// Created by borko on 5/28/2024.
//

#ifndef OBSERVER_H
#define OBSERVER_H
namespace observer {
    class Observer {
        public:
            virtual ~Observer() = default;
            virtual void Update() = 0;
    };
}
#endif //OBSERVER_H
