# 2th_NtrexAHRS_lib_ROS


raspberry pi, Jetson Nano, desktop 에서 호환이 가능한 리눅스 라이브러리 파일입니다.

해당 제품은 ROS및 ROS2 호환이 가능하며 예제는 ROS2 기준으로 작성하였습니다.

[NTRexLAB] MW-AHRSv1 기준으로 개발이 되었으며 v2U, X1 모두 호환이 가능합니다


고객 요청 사항 변경 되었습니다  [2023-08-31]

참고 : stella_ahrs\src\listener.cpp

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
