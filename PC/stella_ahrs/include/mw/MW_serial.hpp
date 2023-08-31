#define BYTE unsigned char

int MW_AHRS_Serial_Connect(char *portname_, uint32_t baudrate_, uint32_t sel, uint8_t data, uint32_t ms);
bool AHRS_Read(unsigned char value[8]);
int MW_Serial_DisConnect();
int AHRS_Euler_RESET(void);
int AHRS_Calibration(void);
bool SendValue(BYTE value[8], int *val);