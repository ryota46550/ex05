struct BOX //���̒�`
{	
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize;//�x����}�փT�C�X
};
void getVolumeSurface(BOX* box);
//��}�֔���֐�
bool isSendable(BOX* box);