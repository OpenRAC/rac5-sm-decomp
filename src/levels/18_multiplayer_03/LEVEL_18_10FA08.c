/* LEVEL_18:0x10FA08 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_002DC838[]; extern int func_10FDC0(unsigned int);
int func_10FA08(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_10FDC0(index)) return 0; entry = D_002DC838 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
