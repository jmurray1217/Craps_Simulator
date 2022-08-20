#ifndef DICE_H_INCLUDED

#define DICE_H_INCLUDED

class Die
{
    private:
    int sides; // Number of sides
    int value; // The die's value

    public:
    Die(int s); //parameterized constructor
    void roll(); // Rolls the die

    int getSides(); // Returns the number of sides
    int getValue(); // Returns the die's value
    int getValue(int n); // Returns the die's value of nth side
};

#endif // DICE_H_INCLUDED