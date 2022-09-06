CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
       # Write your MySQL query statement below.
      select a.salary as  getNthHighestSalary
      from employee a
      where N-1=(
		  select count(distinct(b.salary))
		 from employee b 
		 where a.salary<b.salary
		 )
      LiMIT 1
  );
END