desc user_tables
select table_name,tablespace_name from user_tables;

desc user_objects
set pagesize 9999
select object_name,object_type from user_objects;

desc dept
desc user_constraints
select owner,constraint_name,constraint_type,table_name,r_owner
from user_constraints;

desc user_cons_columns
select constraint_name,table_name,column_name from user_cons_columns;

desc user_tab_columns
select table_name,column_name from user_tab_columns;

alter table dept
add constraint dept_pk primary key(deptno);

alter table emp
add constraint emp_pk primary key(empno);

alter table emp
add constraint emp_fk_deptno
foreign key(deptno) references dept(deptno);

select * from emp;
select * from dept;
select * from bonus;
select * from salgrade;


select lower(ename) from emp;
select upper('aaa') from dual;
select substr('abc',1,2) from dual;
select substr(ename,1,2) from emp;
select lpad(ename,8,'=') from emp;
select rpad(ename,8,'=') from emp;
select ltrim('     abc') from dual;
select rtrim('abc','bc') from dual;


select ename,sal from emp where upper(ename)='SMITH';

select empno,lpad(ename,10),rpad(sal,10) from emp;

select to_char(sysdate,'yyyy') from dual;
select hiredate,to_char(hiredate,'yyyy') from emp;

select to_char((to_date('01-1��-12','dd-MON-yy')),'yyyy') from dual;

select ename,to_char(hiredate, 'day') from emp;
select ename,hiredate from emp where to_char(hiredate, 'day')='������' or to_char(hiredate, 'day')='�ݿ���';

select sysdate from dual;

select to_char(to_date('01-01-12','dd-mm-yy'),'yyyy') from dual;
select empno,ename,hiredate,to_char(hiredate,'day') from emp where to_char(hiredate,'day') in ('������','�ݿ���');

select ename,hiredate,to_char(hiredate,'mon') from emp where to_char(hiredate,'mon') in ('2�� ','12��');

select empno,ename,hiredate,to_char(hiredate,'mon') from emp where rtrim(to_char(hiredate,'mon')) in ('2��','12��');

select sysdate+15 from dual;  

select sysdate-to_date('2018/03/20', 'yy/mm/dd') from dual;

select trunc((sysdate-to_date('18/03/21','yy/mm/dd'))/365) from dual;

select ename,hiredate,trunc((sysdate-hiredate)/365) from emp;

select to_char(-123456,'S999,999') from dual;

select lpad(to_char(-123456,'999,999'),20,'*')from dual;

select to_number('-123,456.78', 999999.99) from dual;

select empno,ename,sal,comm,sal*comm from emp;

select ename,sal*comm from emp where nvl(sal*comm,0) < 1000000;

select nvl(null,0) from dual;

select ename,sal,nvl(to_char(comm), '�ش����') from emp;

select ename,sal,decode(comm, null, '�ش����') from emp;

select empno,ename,sal,decode(comm,null,'�ش����', 0, '��¥����', to_char(comm,'999,999')) from emp;

select empno,ename,sal, case  when comm is null then '�ش����' when comm = 0 then '��¥����' else to_char(comm,'999,999') end from emp;

select ename,hiredate,trunc((sysdate-hiredate)/365) as �ټӿ���, case when trunc((sysdate-hiredate)/365)=10 then '10gold' when trunc((sysdate-hiredate)/365)=37 then '37gold'
when trunc((sysdate-hiredate)/365)=38 then '38gold' else '*' end as Ȳ�ݿ������� from emp;

select empno,ename,job,sal,decode(job, 'CLERK' , round(sal*1.2), 'MANAGER', round(sal*1.5), sal) as �λ��sal from emp;

select to_char(sysdate, 'day') from dual;

select empno,ename, case when mgr is null then 'not exist' end from emp where mgr is null;