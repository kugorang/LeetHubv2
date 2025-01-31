class ParkingSystem {
private:
    size_t cars[4];
public:
    ParkingSystem(int big, int medium, int small) {
        cars[1] = big;
        cars[2] = medium;
        cars[3] = small;
    }
    
    bool addCar(int carType) {
        if (cars[carType] > 0)
        {
            --cars[carType];
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */