class CarMaster;    // For 8 line
class Car
{
private:
    int engine;
    friend class CarMaster; // Give class all access
    // But how to give less permssions?
    friend void CarMaster::repair(Car& x);  // Told full signature
    // Won't work, CarMaster is not defined!
    // We define it in 1st line, yeah!
};

class CarMaster
{
public:
    void repair(Car& x)
    {
        x.engine++; // Can access private field. CarMaster is a friend!
    }
}
