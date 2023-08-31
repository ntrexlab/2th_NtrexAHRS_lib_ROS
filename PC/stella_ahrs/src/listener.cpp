#include "mw_ahrs.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    char *port = "/dev/AHRS"; // char *port = "/dev/ttyUSB0"

    /*
        <ntrex::MwAhrsRosDriver>(port_name, baudrate, sel, data, ms)

        [sel]

        0 - 기능사용하지 않음
        1 - Z축 캘리브레이션
        2 - 각도리셋
        3 - Z축 캘리브레이션및 각도리셋

        [data]

        ACC_CMD 0x01 , GYR_CMD 0x02 , DEG_CMD 0x04 , MAG_CMD 0x08

         0 - 데이터 전송 중단
         1 - 가속도 데이터
         2 - 각속도 데이터
         3 - 가속도, 각속도 데이터
         4 - 각도 데이터
         5 - 가속도, 각도 데이터
         6 - 각속도, 각도 데이터
         7 - 가속도, 각속도, 각도 데이터
         8 - 자기 데이터
         9 - 가속도, 자기 데이터
        10 - 각속도, 자기 데이터
        11 - 가속도, 각속도, 자기 데이터
        12 - 각도, 자기 데이터
        13 - 가속도, 각도, 자기 데이터

        [ms]

        1ms ~ 60,000ms 대역폭 주의
        
    
    */
    rclcpp::spin(std::make_shared<ntrex::MwAhrsRosDriver>(port,115200, 3, ACC_CMD | GYR_CMD | DEG_CMD | MAG_CMD, 10));
    rclcpp::shutdown();
    return 0;
}
