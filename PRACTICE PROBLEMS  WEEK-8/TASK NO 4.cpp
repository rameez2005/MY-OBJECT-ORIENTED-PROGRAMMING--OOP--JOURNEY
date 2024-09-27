//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Package {
//protected:
//    string source;
//    string destination;
//    double weight;
//    const double baseCostPerPound = 20.0;
//
//public:
//    Package(const string& src, const string& dest, double wt) : source(src), destination(dest), weight(wt) {}
//
//    virtual double calculateCost() const {
//        return baseCostPerPound * weight;
//    }
//
//    virtual void printDetails() const {
//        cout << "Source: " << source << endl;
//        cout << "Destination: " << destination << endl;
//        cout << "Weight: " << weight << " pounds" << endl;
//    }
//
//    virtual ~Package() {}
//};
//
//class TwoDayPackage : public Package {
//private:
//    double extraCharge;
//
//public:
//    TwoDayPackage(const string& src, const string& dest, double wt, double extra) : Package(src, dest, wt), extraCharge(extra) {}
//
//    double calculateCost() const  {
//        return baseCostPerPound * weight + extraCharge;
//    }
//};
//
//class UrgentPackage : public Package {
//private:
//    double urgencyPercentage;
//
//public:
//    UrgentPackage(const string& src, const string& dest, double wt, double percentage) : Package(src, dest, wt), urgencyPercentage(percentage) {}
//
//    double calculateCost() const {
//        double baseCost = baseCostPerPound * weight;
//        return baseCost + (baseCost * (urgencyPercentage / 100));
//    }
//};
//
//int main() {
//    const int numPackages = 3;
//    Package* packages[numPackages];
//
//    
//    packages[0] = new Package("Lahore", "Karachi", 10.0);
//    packages[1] = new TwoDayPackage("Islamabad", "Peshawar", 5.0, 20.0);
//    packages[2] = new UrgentPackage("Multan", "Quetta", 8.0, 10.0); // 10% urgency charge
//
//    
//    for (int i = 0; i < numPackages; ++i) {
//        packages[i]->printDetails();
//        cout << "Cost: Rs. " << packages[i]->calculateCost() << endl << endl;
//    }
//
//  
//    for (int i = 0; i < numPackages; ++i) {
//        delete packages[i];
//    }
//    system("pause");
//    return 0;
//}
