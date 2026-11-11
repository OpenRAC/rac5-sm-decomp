/* LEVEL_21:0x0C31F0 -- placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00247DFC[];
extern void func_0C30C0(Entry *entry, float *pos);

void func_0C31F0(unsigned int index, float *pos) {
    func_0C30C0(&D_00247DFC[index], pos);
}
