enum LedState {LEFT, RIGHT, STOP};

class Stepper{
    unsigned char ucLedCtr;
    void Step (enum LedState);
    public:
    void StepLeft (void);
    void StepRight (void);
};
