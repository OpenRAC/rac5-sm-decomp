extern char *func_08EB88(char *data);
extern unsigned short *func_08EBA8(char *data, unsigned int type, int ordinal);

void sceGimPictureGetChunk__FPCvii(char *first, long long second, int third)
{
    func_08EBA8(func_08EB88(first), 3, third);
}
