//�@�Ӳɤl����t��(v0)�M�[�t��(a)�C�p�G�bt��ɳo�ӨҤl���t�׬�v�A�b2t��ɳo�ӨҤl���`�첾���h�� 
//�ɤl���t��v=v0+at�A�첾����s=v0t+1/2at^2(�H2t�a�Jt��m�p��) =>2*v*t�����p���o�X��²�� 
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int v,t;
	while(scanf("%d%d",&v,&t) !=EOF) //scanf ���Ū����J�� v �M t
	//!=EOF �O�@�Ӥ����F���A���Ω��ˬd scanf ��ƬO�_���\Ū���F��J�C
	//�o�Ӵ`���T�O�{���|����Ū���Τ᪺��J�A����Τᰱ���J�Ϊ̦���L���~�o��
	 if (v >= -100 && v <= 100 && t >= 0 && t <= 200) {
            // �p��ÿ�X���G
            printf("%d\n", 2 * v * t);
        } else {
            // �W�X�d�򪺿�J�A���ܥΤ᭫�s��J
            printf("��J���b�X�k�d�򤺡A�Э��s��J�C\n");
        }
	return 0;
} 
