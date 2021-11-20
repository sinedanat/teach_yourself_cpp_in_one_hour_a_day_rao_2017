// BUG BUSTERS: Point out the bug in this code:
// std::unique_ptr<Tuna> myTuna (new Tuna);
// unique_ptr<Tuna> copyTuna;
// copyTuna = myTuna;

// Problem with this line as unique_ptr has private
// copy constructor and assignment operator .
// copyTuna = myTuna;
