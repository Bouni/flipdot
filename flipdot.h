#ifndef F_CPU
#define F_CPU       16000000UL
#endif

#define HIGH            1
#define LOW             0
#define PULSE_LENGTH    1 
#define PIXEL_AT_ONCE   2
#define ROWS            13
#define DELAY_TEST      100 

typedef struct {
    volatile unsigned char *ddr;
    volatile unsigned char *port;
    unsigned char bit;
    } port_t;

typedef struct {
    port_t set[13];
    port_t clear[13]; 
} row_t;



void setup(void);
void set_row(uint8_t n, uint8_t val);
void clear_row(uint8_t n, uint8_t val);
void set_rows(uint16_t data);
void clear_rows(uint16_t data);
void select_col(uint8_t n);
void pulse(void);
void set_col(uint8_t n);
void clear_col(uint8_t n);

