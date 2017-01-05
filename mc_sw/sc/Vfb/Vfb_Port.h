#ifndef VFB_PORT_H
#define VFB_PORT_H

#include "hal.h"

#define STD_LOW		(0u)
#define STD_HIGH	(1u)

#define Vfb_Write_Port_Line_Mode(line, mode)		palSetLineMode(line, mode)
#define Vfb_Write_Port_Line_Value(line, value)		palWriteLine(line, value)
#define Vfb_Read_Port_Line_Value(line)				palReadLine(line)


#endif /* VFB_PORT_H */
