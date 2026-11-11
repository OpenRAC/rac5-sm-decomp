/* LEVEL_07:0x136FE8 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_003A3F18[]; extern int func_1373A0(unsigned int);
int func_136FE8(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_1373A0(index)) return 0; entry = D_003A3F18 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
