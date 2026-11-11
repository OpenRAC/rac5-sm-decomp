/* LEVEL_20:0x0E3B40 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_001FFA18[]; extern int func_0E3EF8(unsigned int);
int func_0E3B40(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_0E3EF8(index)) return 0; entry = D_001FFA18 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
