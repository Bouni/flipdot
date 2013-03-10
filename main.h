
typedef struct {
    volatile unsigned char *ddr;
    volatile unsigned char *port;
    unsigned char bit;
    } port_t;

typedef struct {
    port_t set[13];
    port_t clear[13]; 
} row_t;

