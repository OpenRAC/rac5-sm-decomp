/* LEVEL_09:0x12CF80 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_00375D98[]; extern int func_12D338(unsigned int);
int func_12CF80(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_12D338(index)) return 0; entry = D_00375D98 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
