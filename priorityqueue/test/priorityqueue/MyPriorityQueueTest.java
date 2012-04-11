/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package priorityqueue;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author lich
 */
public class MyPriorityQueueTest {

    public MyPriorityQueueTest() {
    }

    @BeforeClass
    public static void setUpClass() throws Exception {
    }

    @AfterClass
    public static void tearDownClass() throws Exception {
    }

    @Before
    public void setUp() {
    }

    @After
    public void tearDown() {
    }

    /**
     * Test of enqueue method, of class MyPriorityQueue.
     */
    @Test
    public void testEnqueueDequeueInteger() throws Exception {
        System.out.println("queue");
        MyPriorityQueue<Integer> instance = new MyPriorityQueue<Integer>();
        instance.enqueue(100, 1);
        instance.enqueue(100, 0);
        int ret = -1;
        ret = instance.dequeue();
        assertEquals("first elem", 100, ret);
        ret = instance.dequeue();
        assertEquals("second elem", 100, ret);
    }

    @Test
    public void testEnqueueDequeueString() throws Exception {
        System.out.println("queue");
        MyPriorityQueue<String> instance = new MyPriorityQueue<String>();
        instance.enqueue("str1", 1);
        instance.enqueue("str2", 1);
        String ret = "";
        ret = instance.dequeue();
        assertEquals("first elem", "str2", ret);
        ret = instance.dequeue();
        assertEquals("second elem", "str1", ret);
    }

    @Test
    public void testQueueException() throws Exception {
        MyPriorityQueue<String> instance = new MyPriorityQueue<String>();
        try {
            instance.dequeue();
        } catch (Exception e) {
            assertEquals("empty queue", 1, 1);
        }        
    }
}
