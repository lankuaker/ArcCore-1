
/^[ \t]+__rom_start/ {
	rom_start=strtonum("0x"$2)
}
/^[ \t]+__rom_end/ {
	rom_end=strtonum("0x"$2)
}

/^[ \t]+__ram_start/ {
	ram_start=strtonum("0x"$2)
}

/^[ \t]+__ram_end/ {
	ram_end=strtonum("0x"$2)
}

END { 
	kilobyte = 1024

	printf "  ROM %8x %8x %10.1f\n", rom_start, rom_end, (rom_end-rom_start)/kilobyte;
	printf "  RAM %8x %8x %10.1f\n", ram_start, ram_end, (ram_end-ram_start)/kilobyte;
	
}