#ifndef IHATE_H_INCLUDED
#define IHATE_H_INCLUDED
#include <graphics.h>
void lineHorizC(int x, int y, int end_x);
void lineHorizL(int x, int y, int lenth);
void lineVertC(int x, int y, int end_y);
void lineVertL(int x, int y, int lenth);
void rect(int x, int y, int end_x, int end_y);
void rectFull(int x, int y, int end_x, int end_y);
//even more scheisse incoming...
void rectL(int x, int y, int lenth_y, int lenth_x);
void rectFullL(int x, int y, int lenth_x, int lent_y);
void diagH(int numEl);
void diagV(int numEl);
int maxi(int * array, int numEl);
#endif // IHATE_H_INCLUDED
