#ifndef CPP_CALCULATOR_CALC_HPP
#define CPP_CALCULATOR_CALC_HPP

#include <string>

class calc {
    public:
        static float calculateFromExpression(const std::string& expression);

    private:
        static char findOperator(const std::string &expression);
        static int* numbersFromString(const std::string& expression);

        static float add(float a, float b);
        static float subtract(float a, float b);
        static float multiply(float a, float b);
        static float divide(float a, float b);

        static const char OPERATOR_ADD;
        static const char OPERATOR_SUBTRACT;
        static const char OPERATOR_MULTIPLY;
        static const char OPERATOR_DIVIDE;

        static const char OPERATORS[4];
};

#endif //CPP_CALCULATOR_CALC_HPP
