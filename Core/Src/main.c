#include "main.h"

struct tx_packet {
	uint8_t command_id;
	uint8_t mod;
	uint8_t freq;
	uint8_t cr;
};

static struct tx_packet settings;
static struct tx_packet settings_result;

static int prepare_packet( void );
static int copy_packet( void );


int main(void)
{
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();
//  uint8_t testing = 0;
  while (1)
  {
	  prepare_packet();
  }

}


static int prepare_packet( void )
{
	uint8_t command_id = 0x01;
	settings.command_id = command_id;
	settings.mod = 0x10;
	settings.freq = 0x18;
	copy_packet();
	settings.mod = 0x20;
	return 0;
}


static int copy_packet( void )
{
	settings_result.mod = settings.mod;
	return 0;
}
