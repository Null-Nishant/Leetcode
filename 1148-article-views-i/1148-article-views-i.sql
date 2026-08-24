# Write your MySQL query statement below
-- SELECT DISTINCT article_id as id  from Views where author_id = viewer_id order by id;# Write your MySQL query statement below

select distinct author_id as id from Views
where author_id = viewer_id 
order by id;