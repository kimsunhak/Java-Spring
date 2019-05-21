package org.zerock.mapper;

import java.util.List;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringRunner;
import org.zerock.domain.Criteria;
import org.zerock.domain.ReplyVO;

import lombok.Setter;
import lombok.extern.log4j.Log4j;

@RunWith(SpringRunner.class)
@ContextConfiguration("file:src/main/webapp/WEB-INF/spring/root-context.xml")
//JAVAConfig
// @ContextConfiguration(classes = {org.zerock.config.RootConfig.class})
@Log4j
public class ReplyMapperTests {
	
		private Long[] bnoArr = { 5472521L, 5472501L, 5472500L, 5472499L, 5472498L};

		@Setter(onMethod_ = @Autowired)
		private ReplyMapper mapper;
		
//		//게시물 생성
//		@Test
//		public void testCreate() {
//			
//			IntStream.rangeClosed(1, 10).forEach(i -> {
//				
//				ReplyVO vo = new ReplyVO();
//				
//				//게시물 번호
//				vo.setBno(bnoArr[i % 5]);
//				vo.setReply("댓글 테스트" + i);
//				vo.setReplyer("replyer" + i);
//				
//				mapper.insert(vo);
//			});
//		}
		
		//조회
		@Test
		public void testRead() {
			
			Long targetRno = 5L;
			
			ReplyVO vo = mapper.read(targetRno);
			
			log.info(vo);
		}
		
		//게시물 삭제
		@Test
		public void testDelete() {
			
			Long targetRno = 1L;
			
			mapper.delete(targetRno);
		}
		
		@Test
		public void testUpdate() {
			
			Long targetRno = 10L;
			
			ReplyVO vo = mapper.read(targetRno);
			
			vo.setReply("Update Reply");
			
			int count = mapper.update(vo);
			
			log.info("UPDATE COUNT: " + count);
			
		}
		
		@Test
		public void testList() {
			
			Criteria cri = new Criteria();
			
			List<ReplyVO> replies = mapper.getListWithPaging(cri, bnoArr[0]);
			
			replies.forEach(reply -> log.info(reply));
		}
		
		
		@Test
		public void testMapper() {
			log.info(mapper);
		}
}
