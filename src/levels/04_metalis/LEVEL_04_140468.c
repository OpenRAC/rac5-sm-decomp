/* LEVEL_04:0x140468 -- placement copy of LEVEL_01_133FE8.c: stores three bytes into a table entry when a slot check succeeds. */
extern char D_003A8E18[]; extern int func_140820(unsigned int);
int func_140468(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_140820(index)) return 0; entry = D_003A8E18 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
