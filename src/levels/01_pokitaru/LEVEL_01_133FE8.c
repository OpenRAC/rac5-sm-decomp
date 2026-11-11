/* LEVEL_01:0x133FE8 -- stores three bytes into a table entry when a slot check succeeds. */
extern char D_0038E618[]; extern int func_1343A0(unsigned int);
int func_133FE8(unsigned int index, unsigned char first, unsigned char second, unsigned char third){ char *entry;
if (index >= 8) return 0; if (!func_1343A0(index)) return 0; entry = D_0038E618 + index * 0x824; entry[0x820] = first; entry[0x822] = second; entry[0x821] = third; return 1;
}
