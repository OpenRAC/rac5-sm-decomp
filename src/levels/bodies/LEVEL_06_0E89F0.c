typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0031D33C[];
extern void func_0E88C0(Entry *entry, float *pos);

void func_0E89F0(unsigned int index, float *pos) {
    func_0E88C0(&D_0031D33C[index], pos);
}
