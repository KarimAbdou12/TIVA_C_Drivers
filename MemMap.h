


#ifndef MEMMAP_H_
#define MEMMAP_H_

/************* RCC register map and reset values ***********/

#define   RCC     (*(volatile unsigned long *)0x400FE060) //0x060
#define   RCC2    (*(volatile unsigned long *)0x400FE070) //Offset 0x070
#define   RIS	  (*(volatile unsigned long *)0x400FE058) //Offset0x058



#endif /* MEMMAP_H_ */