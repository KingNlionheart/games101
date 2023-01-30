//#include<math>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
const float PI = 3.1415926f;

//生成旋转矩阵
Eigen::Matrix3f rotate(double theta){
    Eigen::Matrix3f r;
    r << std::cos(theta/180.0*acos(-1)), -std::sin(theta/180.0*acos(-1)), 0, std::sin(theta/180.0*acos(-1)), std::cos(theta/180.0*acos(-1)), 0.0, 0.0, 0.0, 1.0;
    return r;
}

//生成移动矩阵
Eigen::Matrix3f translation(double x,double y){
    Eigen::Matrix3f r;
    r << 1.0, 0.0, x, 0.0, 1.0, y, 0.0, 0.0, 1.0;
    return r;
}


int main(){
    // Example of vector
    std::cout << "Example of vector  P=(2,1) \n";
    // vector definition
    Eigen::Vector3f p(2.0f,1.0f,1.0f);

    //旋转45度
    Eigen::Matrix3f r=rotate(45);
    
    //平移 1 2
    Eigen::Matrix3f t=translation(1,2);

    std::cout << t*r*p << std::endl;
    return 0;
}
