I1=imread('lena.jpg'); %����ͼƬ
I1=rgb2gray(I1);%ͼ���ֵ��ת��
I1=imresize(I1,[300 300])
subplot(1,2,1)
imshow(I1);  
title('ԭʼͼ��');
I2=dct2(I1);%��ɢ���ұ任 
subplot(1,2,2);
imshow(log(abs(I2)),[]);%������ʾͼ��
title('��ɢ���ұ任��');
