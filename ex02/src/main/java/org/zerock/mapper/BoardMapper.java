package org.zerock.mapper;

import java.util.List;

import org.zerock.domain.BoardVO;


public interface BoardMapper {

	//@Select("select * from tb1_board where bno > 0")
	public List<BoardVO> getList();
	
	public void insert(BoardVO board);
	public void insertSelectKey(BoardVO board);


}
