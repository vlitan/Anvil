#ifndef _UTILS_H_
# define _UTILS_H_

# include <inttypes.h>
# include <stdbool.h>

# define LOW 0
# define HIGH 1

# define read_port_pin(port, pin_index) ((bool)((port) & (1 << (pin_index))))//this got obsolete, if found, to be replaced with get_bit
# define get_bit(nbr, bit_index)	((bool)((nbr) & (1 << (bit_index))))//same thing as above

# define PORT_(port) PORT ## port
# define DDR_(port)  DDR  ## port
# define PIN_(port)  PIN  ## port
# define PORT(port) PORT_(port)
# define DDR(port)  DDR_(port)
# define PIN(port)  PIN_(port)

inline void	set_reg_pin(volatile uint8_t *reg, uint8_t pin_index, bool pin_val);
inline void toggle_reg_pin(volatile uint8_t *reg, uint8_t pin_index);
#endif
