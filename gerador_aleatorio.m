n = 10000;
digits 4;
x = round(n*(rand(n,1)));
x = unique(vpa(x));
x = x(randperm(length(x)));

x1 = x(1:end*0.01);
x2 = x(1:end*0.1);
x3 = x(1:end*0.5);

fid = fopen('sequencia01.txt','w');
fprintf(fid, '[');
fprintf(fid,'%hd, ',vpa(x1(1:end-1)));
fprintf(fid,'%hd]',vpa(x1(end)));
fclose(fid);

fid = fopen('sequencia02.txt','w');
fprintf(fid, '[');
fprintf(fid,'%hd, ',vpa(x2(1:end-1)));
fprintf(fid,'%hd]',vpa(x2(end)));
fclose(fid);

fid = fopen('sequencia03.txt','w');
fprintf(fid, '[');
fprintf(fid,'%hd, ',vpa(x3(1:end-1)));
fprintf(fid,'%hd]',vpa(x3(end)));
fclose(fid);