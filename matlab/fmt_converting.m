% ����ͼƬ,��ʾ 
%I = imread('lena.jpg')
%subplot(221);imshow(I)

load trees
i5=ind2gray(X,map)
figure,imshow(X,map), title("����ͼת�Ҷ�ͼ��ʾ")


%% ����ͼ���ж�ֵ������
load trees
BW6 = im2bw(X,map,0.4) % 0.4��ֵ�Ķ�ֵ��.
imshow(X,map), title("����ͼ")
figure, imshow(BW6), title("��ֵ��ͼ")

%% gray to indexed img
I = imread('lena.jpg')
%subplot(221);imshow(I)
Xnew = grayslice(I,16);
imshow(I)
figure, imshow(Xnew,jet(16))
