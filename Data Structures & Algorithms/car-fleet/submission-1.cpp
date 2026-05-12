class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double, double>> cars;
        stack<double> fleets;

        for (int i = 0; i < position.size(); i++)
        {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        for (auto& car: cars)
        {
            double time = (target - car.first) / car.second;
            if (fleets.empty())
            {
                fleets.push(time);
            }
            else if (time > fleets.top())
            {
                fleets.push(time);
            }
        }

        return fleets.size();
    }
};
