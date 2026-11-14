/* sceGimPictureLoadFile__FP13SceGimPicturePCvii -- validates a GIM file image and loads the selected picture chunk. */
extern int sceGimPictureCheckFileHeader__FPCvi(const void *data, int size);
extern const void *sceGimPictureGetChunk__FPCvii(const void *data, int size, int index);
extern int sceGimPictureLoad__FP13SceGimPicturePC11SceGimChunk(void *picture, const void *chunk);

int sceGimPictureLoadFile__FP13SceGimPicturePCvii(void *picture, const void *data, int size, int index) {
    const void *chunk;

    if (picture != 0 && data != 0 && size >= 4 && *(const unsigned int *)data == 0x2E47494D) {
        if (sceGimPictureCheckFileHeader__FPCvi(data, size) != 0) {
            chunk = sceGimPictureGetChunk__FPCvii(data, size, index);
            if (chunk != 0) {
                return sceGimPictureLoad__FP13SceGimPicturePC11SceGimChunk(picture, chunk);
            }
        }
    }
    return 0;
}
