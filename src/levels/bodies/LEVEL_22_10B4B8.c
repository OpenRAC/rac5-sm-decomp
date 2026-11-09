/* LEVEL_22:0x10B4B8 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_002E40F8[]; extern int func_10B870(unsigned int);
int func_10B4B8(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_10B870(index)) return 0; entry = D_002E40F8 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
