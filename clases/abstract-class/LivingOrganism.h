//
// Created by fernando on 3/31/26.
//

#ifndef ABSTRACT_CLASS_LIVINGORGANISM_H
#define ABSTRACT_CLASS_LIVINGORGANISM_H


class LivingOrganism {
public:
    virtual ~LivingOrganism() = default;

    virtual double feedOneself() = 0;
};


#endif //ABSTRACT_CLASS_LIVINGORGANISM_H