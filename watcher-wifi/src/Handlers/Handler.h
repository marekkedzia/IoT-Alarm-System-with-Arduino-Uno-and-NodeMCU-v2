#ifndef Handler_h
#define Handler_h

class Handler {
public:
    virtual void handle() = 0;
    virtual void init() = 0;
};

#endif
