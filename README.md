# 2th_NtrexAHRS_lib_ROS


raspberry pi, Jetson Nano, desktop 에서 호환이 가능한 리눅스 라이브러리 파일입니다.

해당 제품은 ROS및 ROS2 호환이 가능하며 예제는 ROS2 기준으로 작성하였습니다.

[NTRexLAB] MW-AHRSv1 기준으로 개발이 되었습니다.


< Ver 2.0 수정사항 - 2024. 04. 25 >

- 라이브러리 변경 및 함수 추가 됨
- 세 개의 AHRS 다른 모델 사용 할 수 있도록 만들었음

1. 테스트 환경
  lib_aarch64 : JetSon Xavier
  lib_amd64   : MSI NoteBook
  lib_armv7l  : Raspberry Pi

2. 사용방법

1) 본인이 사용하는 AHRS 데이터 테이블 만들기 (해당 경로에 X1 기준으로 만들었음)

ros2_example/stella_ahrs/include/mw/mw_ahrsX1_def.hpp

2) 이번에 변경된 함수

ros2_example/stella_ahrs/include/mw/mw_serial.hpp

3) 개선된 ROS 코드 

ros2_example/stella_ahrs/mw/mw_ahrs.cpp

#include "mw_ahrsX1_def.hpp" //해당 헤더파일 추가

(X1 기준으로 함수 작성 예시)

![image](https://github.com/ntrexlab/2th_NtrexAHRS_lib_ROS/assets/85467544/1968f4a6-d733-46d0-bdc6-6a1515c85183)

(동작 시퀀스 확인하기)

![image](https://github.com/ntrexlab/2th_NtrexAHRS_lib_ROS/assets/85467544/100685a0-11fe-4556-ad71-91f9e6d14a78)


