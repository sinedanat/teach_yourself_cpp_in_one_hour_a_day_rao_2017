// BUG BUSTERS: What is wrong with the following code?
// class SomeIntelligentStuff
// {
//     bool isStuffGoneBad;
// public:
//     ~SomeIntelligentStuff()
//     {
//         if (isStuffGoneBad)
//             throw "Big problem in this class, just FYI";
//     }
// };

// Don't throw exceptions from destructors.
