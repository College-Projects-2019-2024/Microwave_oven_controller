void PortF_init(void);
void PortA_init(void);
void PortB_init(void);
void PortC_init(void);
void PortE_init(void);
unsigned char Switch1_input(void);
unsigned char Switch2_input(void);
void Output_on_leds(unsigned char data);

#define red 0x02;
#define blue 0x04;
#define green 0x08;
